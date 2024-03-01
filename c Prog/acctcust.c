create table account(acct_no int primary key,acct_type varchar(22) check(Acct_type in('saving','current')),balance int check(balance>0),branch_name varchar(53));


