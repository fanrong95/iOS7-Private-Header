/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCPasscodeManager.h"



@interface MCPasscodeManagerWriter : MCPasscodeManager

{

}



+ (_Bool)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2;

+ (id)sharedManager;

- (void)_sendPasscodeChangedNotification;

- (void)_setPrivatePasscodeDict:(id)arg1;

- (_Bool)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id *)arg3;

- (_Bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id *)arg3;



@end


