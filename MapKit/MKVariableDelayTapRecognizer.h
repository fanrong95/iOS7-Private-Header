/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITapGestureRecognizer.h"



__attribute__((visibility("hidden")))

@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer

{

    double originalMaximumIntervalBetweenSuccessiveTaps;

    id <MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;

}



- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

- (void)reset;

@property(nonatomic) id <MKVariableDelayTapRecognizerDelegate> tapDelayDelegate; // @synthesize tapDelayDelegate;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;



@end


