/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAAceSerializable.h"



@class NSString, NSURL;



@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable>

{

}



+ (id)linkedAnswer;

+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSString *description;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSURL *image;

@property(copy, nonatomic) NSURL *link;

@property(copy, nonatomic) NSString *name;



@end


