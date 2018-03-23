# Reinstall my macOS #
#### This is No.'I don't really know how many times that I do.' ####  
  
- I still remember last time,  
when my mac prentened like dying,  
that cost me 5k for light the screen alive.  
*(But last time is not System's problems)*  

- And now problems just change a clothes and  comes again.  
I just really wanna try to solve this problem wiz myself.

## Here make some note. ##     
> 1. For always notice myself to be calm,  
and remember stay hungry how important for life.  

> 2. Actually most important thing is,   
**What if next time wiz this issue again.**  
>> + ### Ok here is the tips ###    

>> >+ ` PRAM `  and ` NVRAM`   always need to try.
> >> >>  [https://support.apple.com/zh-cn/HT204063]()   

>>>+ Then try to reinstall your macOS wiz:

> >>>>`Command-R`\ `Command-Option-R`\ ` Shift-Option-Command-R `  

+ About that two, have too much imformation can find.  
+ So then just write some really useful  
+ **Because** 
 + **Sure that all is not suit for me**
>> + Last week, my keyboard was surddenly broken,  
so I just use USB keyboard,  
everytime when I tap that key,  
I got fail, still go in the black screen.
>> + I try to recover it,  
but failed again.  
I don't know why, maybe APFS? I am not sure.  
>>+ So I have to try to fix wiz Internet,   I tried three times,  
but still failed. 
+ >>> Everytime is same situation.   
after long time wait for download and install all done,  
when log in system almost 80%.  
I pray for 100 times in my heart.   
Then miracle just show me --- screen just flash ?!?!  
it is really makes me know what is fallen from the sky.  
>>+ So the next step,  
I try to make a Usb for help my mac reinstall,  
but unfortunately, still get some mistakes,  
mac can't choose it to restar.  

>>+ Almost quiet.

+ >>>  But all that files is not backup, 
  I still want them so bad. 
+ >>So I go search some code and think maybe that gonna help.  
Even not,  can not get more worst.
+>> So finally I just tap the `Command-S`to use the 
```
Single-User Mode
```

+ **Still failed a couple of times,  
but finally it is really worked.**


>> + Almost depended on this link
[http://macsage.com/mounting-usb-drive-in-single-user-mode/]()  

+ >>>During that copid,  
I got a problem is I only have one **NTFS** empty usb drive.  
another three all full or nearly.
I tried to format so many times,  
but  `ROOT` stiil not enough power,only can load.  

+ >>> Then I just try to reboot and restar again,   
this time I use `Command-R` and open Terminal wiz `csrutil disable`  
Finally,  worked!!  
Mac mount my NTFS and can use `cp -R / ` to force system copy my things to my usb.  ==`cp `is not allowed you to copid the directory. so just use` - R /`==

+ ==Btw== someone say if you still have this problem,   
+ and your usb drive is not enough for your system, you can use Disk toll to make `DMG`.  
***

**After this,  I really hope that I can always remember how important `Time Machine` it is.**


