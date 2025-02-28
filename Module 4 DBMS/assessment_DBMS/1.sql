create schema bank_detail;
use bank_detail;

-- Create a Bank table, attributes are : branch id, branch name, branch city
create table Bank
(
branch_id int primary key, 
branch_name varchar(25),
branch_city varchar(50)
);
insert into Bank(branch_id,branch_name,branch_city) values 
(101,'YES Bank','Ahmedabad'),
(102,'BOB Bank','Surat'),
(103,'HDFC Bank','Mumbai'),
(104,'SBI Bank','Ahmedabad'),
(105,'Punjab National Bank','Surat'),
(106,'Reliance Bank','Vadodara'),
(107,'ICICI Bank','Karnataka'),
(108,'AXIS Bank','Delhi'),
(109,'Dena Bank','Surat'),
(110,'Union Bank','Bangalore');
select * from bank;

-- Create a Loan table, attributes are : loan no, branch id, account holder’s id, loan amount and loan type
create table loan
(
loan_no int primary key,
loan_amount double,
loan_type varchar(50),
branch_id int not null,
account_holder_id int,
foreign key (branch_id) references Bank(branch_id)
);
insert into Loan(loan_no,loan_amount,loan_type,branch_id,account_holder_id) values 
(1,2000,'Home Loan',101,201),
(2,5000,'Car Loan',102,202),
(3,900,'Home Loan',103,203),
(4,1500,'Personal Loan',104,204),
(5,800,'Car Loan',105,205),
(6,1000,'Home Loan',106,206),
(7,15000,'Personal Loan',107,207),
(8,500,'Car Loan',108,208),
(9,4000,'Personal Loan',109,209),
(10,1000,'Home Loan',110,210);
select * from Loan;

-- Create a table named as Account holder for the same scenario containing the attributes are account holder’s id, account no, account holder’s name,
-- city, contact, date of account created, account status (active or terminated), account type and balance.
create table Account_holder
(
account_holder_id int primary key,
account_no int,
account_holder_name varchar(50),
city varchar(50),
contact varchar(15),
created_date_of_account varchar(11),
account_status varchar(15),
account_type varchar(15),
balance double
);  
insert into Account_holder(account_holder_id, account_no, account_holder_name, city, contact, created_date_of_account, account_status, account_type, balance) values 
(201,1101,'Vishal Suthar','Banswara',9182736451,'20-May-1990','Active','Savings',100000),
(202,1202,'Mehul Patidar','Partapur',9876543210,'29-Oct-1999','Terminated','Savings',15000),
(203,1033,'Darshan Suthar','Parsoliya',9123456780,'4-Nov-2004','Active','Checking',12000),
(204,1044,'Harh Jain','Chittorgarh',9345678901,'28-Jan-2020','Terminated','Checking',18000),
(205,1055,'Knishak Sharma','Udaipur',9456123789,'20-Mar-2000','Active','Savings',10000),
(206,1066,'Vikram Rathore','Chittorgarh',9567891234,'27-Apr-2023','Active','Checking',500),
(207,1077,'Manoj Suthar','Parsoliya',9678901234,'11-Jun-2010','Terminated','Savings',150000),
(208,1088,'Jatin Vyas','Parsoliya',9789012345,'28-Feb-2009','Active','Savings',88000),
(209,1099,'Jahnavi Suthar','Partapur',9890123456,'29-May-1999','Active','Savings',49000),
(210,1180,'Archi Suthar','Paloda',9901234567,'20-Apr-2020','Terminated','Checking',10200);

select * from Account_holder;

-- Intra-bank fund transfer procedure
delimiter &&
create procedure transaction (in A varchar(25), in B varchar(25), in transfer_amount double)
begin
	declare available_balance double;
	if not exists(select 1 from Account_holder where account_no = A) then
		signal sqlstate '45000' set message_text = 'From Account Does Not Exist';
	end if;
	if not exists(select 1 from Account_holder where account_no = B) then
		signal sqlstate '45000' set message_text = 'To Account Does Not Exist';
	end if;
	select balance into available_balance from Account_holder where account_no = A;
	if available_balance < transfer_amount then
		signal sqlstate '45000' set message_text = 'Insufficient Balance';
	end if;
	start transaction;
		update Account_holder set balance = balance - transfer_amount where account_no = A;
		update Account_holder set balance = balance + transfer_amount where account_no = B;
	commit;
end &&
delimiter ;

call transaction('1101','1202',100);

-- Fetch account holders from the same city
select ah.account_holder_id, ah.account_holder_name, ah.city, b.account_holder_id, b.account_holder_name 
from account_holder ah 
join account_holder b on ah.city = b.city
where ah.account_holder_id < b.account_holder_id;

-- Fetch account number and account holder name whose accounts were created after the 15th of any month
select account_no, account_holder_name 
from account_holder 
where day(str_to_date(created_date_of_account, '%d-%b-%Y')) > 15;

-- Display the city name and count of branches with alias Count_Branch
select branch_city as City, count(branch_city) as Count_Branch 
from bank 
group by branch_city;

-- Fetch account holder’s id, account holder’s name, branch id, and loan amount for people who have taken loans
select ah.account_holder_id, ah.account_holder_name, l.branch_id, l.loan_amount 
from loan l 
join account_holder ah on l.account_holder_id = ah.account_holder_id;
