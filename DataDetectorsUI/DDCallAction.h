/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DDTelephoneNumberAction.h"


__attribute__((visibility("hidden")))

@interface DDCallAction : DDTelephoneNumberAction

{

}



- (id)_UIDsAndLabelsMatchingPhoneNumber:(id)arg1 inAddressBook:(void *)arg2;

- (id)_nameForPerson:(void *)arg1;

- (_Bool)_retrieveNameForDestinationNumber:(id *)arg1 label:(id *)arg2;

- (_Bool)_titleFitsInActionSheet:(id)arg1;

- (id)localizedName;

- (void)perform;



@end


