# OverTheWire Bandit Solutions

## Level 0
- **Commands Used:**
  ```bash
  ssh bandit0@bandit.labs.overthewire.org -p 2220
  ```
- **Password Found:** bandit0

![alt text](image.png)

## Level 1
- **Commands Used:**
  ```bash
  ls
  cat readme
  ```
- **Password Found:** ZjLjTmM6FvvyRnrb2rfNWOZOTa6ip5If

![alt text](image-1.png)

## Level 2
- **Commands Used:**
  ```bash
  ls -alps
  cat ./-
  ```
- **Password Found:** 263JGJPfgU6LtdEvgfWU1XP5yac29mFx

![alt text](image-2.png)

## Level 3
- **Commands Used:**
  ```bash
  cat spaces\ in\ this\ filename
  ```
- **Password Found:** MNk8KNH3Usiio41PRUEoDFPqfxLPlSmx

![alt text](image-3.png)

## Level 4
- **Commands Used:**
  ```bash
  ls -alps
  cat ...Hiding-From-You
  ```
- **Password Found:** 2WmrDFRmJIq3IPxneAaMGhap0pFhF3NJ

![alt text](image-4.png)

## Level 5
- **Commands Used:**
  ```bash
  ls
  find . -type f |xargs file
  cat ./file07
  ```
- **Password Found:** 4oQYVPkxZOOEOO5pTW81FB8j8lxXGUQw

![alt text](image-5.png)

## Level 6
- **Commands Used:**
  ```bash
  find . -type f -size 1033c ! -executable
  cat readme
  ```
- **Password Found:** HWasnPhtq9AVKe0dmk45nxy20cvUa6EG

![alt text](image-6.png)



## Level 7
- **Commands Used:**
  ```bash
  find / -size 33c -user bandit7 -group bandit6
  cat /var/lib/dpkg/info/bandit7.password 
  ```
- **Password Found:** morbNTDkSW6jIlUc0ymOdMaLnOlFVAaj

![alt text](image-7.png)



## Level 8
- **Commands Used:**
  ```bash
  ls
  cat data.txt
  strings data.txt | grep "millionth"
  ```
- **Password Found:** dfwvzFQi4mU0wfNbFOe9RoWskMLg7eEc

![alt text](image-8.png)



## Level 9
- **Commands Used:**
  ```bash
  ls
  cat data.txt
  sort data.txt | uniq -c
  ```
- **Password Found:** 4CKMh1JI91bUIZZPXDqGanal4xvAg0JM

![alt text](image-9.png)



## Level 10
- **Commands Used:**
  ```bash
  strings data.txt |grep "="
  ```
- **Password Found:** FGUW5ilLVJrxX9kMYMmlN4MgbpfMiqey

![alt text](image-10.png)



## Level 11
- **Commands Used:**
  ```bash
  ls
  base64 -d data.txt
  ```
- **Password Found:** dtR173fZKb0RRsDFSGsg2RWnpNVj3qRr

![alt text](image-11.png)

## Level 12
- **Commands Used:**
  ```bash
  ls
  strings data.txt
  strings data.txt | tr "$(echo -n {A..Z} {a..z} | tr -d ' ')" "$(echo -n {N..Z} {A..M} {n..z} {a..m} | tr -d ' ')"
  ```
- **Password Found:** 7x16WNeHIi5YkIhWsfFIqoognUTyj9Q4

![alt text](image-12.png)
