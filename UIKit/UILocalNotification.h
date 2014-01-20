/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSCalendar, NSDate, NSDictionary, NSString, NSTimeZone;



@interface UILocalNotification : NSObject <NSCopying, NSCoding>

{

}



+ (id)alloc;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)clearNonSystemProperties;

- (long long)compareFireDates:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (_Bool)isValid;

- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;

- (id)nextFireDateForLastFireDate:(id)arg1;



// Remaining properties

@property(copy, nonatomic) NSString *alertAction; // @dynamic alertAction;

@property(copy, nonatomic) NSString *alertBody; // @dynamic alertBody;

@property(copy, nonatomic) NSString *alertLaunchImage; // @dynamic alertLaunchImage;

@property(nonatomic) _Bool allowSnooze; // @dynamic allowSnooze;

@property(nonatomic) long long applicationIconBadgeNumber; // @dynamic applicationIconBadgeNumber;

@property(copy, nonatomic) NSString *customLockSliderLabel; // @dynamic customLockSliderLabel;

@property(copy, nonatomic) NSDate *fireDate; // @dynamic fireDate;

@property(nonatomic) _Bool fireNotificationsWhenAppRunning; // @dynamic fireNotificationsWhenAppRunning;

@property(copy, nonatomic) NSString *firedNotificationName; // @dynamic firedNotificationName;

@property(nonatomic) _Bool hasAction; // @dynamic hasAction;

@property(nonatomic) _Bool hideAlertTitle; // @dynamic hideAlertTitle;

@property(nonatomic) _Bool interruptAudioAndLockDevice; // @dynamic interruptAudioAndLockDevice;

@property(nonatomic) _Bool isSystemAlert; // @dynamic isSystemAlert;

@property(nonatomic) int remainingRepeatCount; // @dynamic remainingRepeatCount;

@property(copy, nonatomic) NSCalendar *repeatCalendar; // @dynamic repeatCalendar;

@property(nonatomic) unsigned long long repeatInterval; // @dynamic repeatInterval;

@property(nonatomic) _Bool resumeApplicationInBackground; // @dynamic resumeApplicationInBackground;

@property(nonatomic) _Bool showAlarmStatusBarItem; // @dynamic showAlarmStatusBarItem;

@property(copy, nonatomic) NSString *snoozedNotificationName; // @dynamic snoozedNotificationName;

@property(copy, nonatomic) NSString *soundName; // @dynamic soundName;

@property(nonatomic) int soundType; // @dynamic soundType;

@property(copy, nonatomic) NSTimeZone *timeZone; // @dynamic timeZone;

@property(nonatomic) int totalRepeatCount; // @dynamic totalRepeatCount;

@property(copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;



@end


