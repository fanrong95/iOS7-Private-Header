/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface AXEventTapPair : NSObject

{

    int priority;

    id handler;

    NSString *identifier;

}



- (void)dealloc;

- (id)description;

@property(copy, nonatomic) id handler; // @synthesize handler;

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;

@property(nonatomic) int priority; // @synthesize priority;



@end


