/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIRuntimeConnection.h"


@class NSString;



@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection

{

    NSString *runtimeCollectionClassName;

    _Bool addsContentToExistingCollection;

}



@property _Bool addsContentToExistingCollection; // @synthesize addsContentToExistingCollection;

- (void)connect;

- (void)connectForSimulator;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (void)performConnect;

@property(copy) NSString *runtimeCollectionClassName; // @synthesize runtimeCollectionClassName;



@end


