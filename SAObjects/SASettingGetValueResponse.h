/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SASettingResponse.h"


#import "SASettingSupplier.h"



@class SASettingEntity;



@interface SASettingGetValueResponse : SASettingResponse <SASettingSupplier>

{

}



+ (id)getValueResponse;

+ (id)getValueResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

- (id)groupIdentifier;



// Remaining properties

@property(retain, nonatomic) SASettingEntity *setting; // @dynamic setting;



@end


