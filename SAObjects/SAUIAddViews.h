/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SABaseClientBoundCommand.h"


@class NSArray, NSString;



@interface SAUIAddViews : SABaseClientBoundCommand

{

}



+ (id)addViews;

+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSString *dialogPhase;

@property(copy, nonatomic) NSString *displayTarget;

- (id)encodedClassName;

- (id)groupIdentifier;

- (_Bool)requiresResponse;

@property(nonatomic) _Bool scrollToTop;

@property(nonatomic) _Bool temporary;

@property(copy, nonatomic) NSArray *views;



@end


