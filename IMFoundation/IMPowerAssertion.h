/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString;



@interface IMPowerAssertion : NSObject

{

    unsigned int _assertion;

    NSString *_identifier;

    NSArray *_stack;

}



- (void)dealloc;

- (id)description;

- (id)initWithIdentifier:(id)arg1;

- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;



@end


