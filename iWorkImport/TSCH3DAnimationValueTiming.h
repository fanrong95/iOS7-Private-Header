/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DAnimationTiming.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface TSCH3DAnimationValueTiming : TSCH3DAnimationTiming

{

    NSString *mName;

    box_e9f23397 mValueRange;

}



+ (id)timingWithName:(id)arg1;

+ (id)timingWithName:(id)arg1 valueRange:(const box_e9f23397 *)arg2;

- (id).cxx_construct;

- (void)dealloc;

- (id)description;

- (void)evaluate:(float)arg1 context:(id)arg2;

- (id)initWithName:(id)arg1;

- (id)initWithName:(id)arg1 valueRange:(const box_e9f23397 *)arg2;

@property(retain, nonatomic) NSString *name; // @synthesize name=mName;

@property(nonatomic) box_e9f23397 valueRange; // @synthesize valueRange=mValueRange;



@end


