import datetime
import os

##

def set_sys_date(year, month, day):
    print('date %04d/%02d/%02d' % (year, month, day))
    os.system('date %04d/%02d/%02d' % (year, month, day))

def set_sys_time(hour, minute, second):
    print('time %02d:%02d:%02d' % (hour, minute, second))
    os.system('time %02d:%02d:%02d' % (hour, minute, second))

def commit(msg):
    os.system('git add .')
    os.system('git commit -m %s' % (msg))

if __name__ == '__main__':
    set_sys_date(2015,4,18)    #设置那一天
    set_sys_time(18,29,22)     #设置时分秒
    commit("排序")              #想要深色点，最低三个提交
