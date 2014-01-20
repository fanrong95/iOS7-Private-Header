/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))

@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate

{

    _Bool _useDefaultModalPresentationStyle;

    _Bool _useDefaultModalTransitionStyle;

    long long _modalPresentationStyle;

    long long _modalTransitionStyle;

    _Bool _animates;

}



@property(nonatomic) _Bool animates; // @synthesize animates=_animates;

- (id)defaultSegueClassName;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;

@property(nonatomic) long long modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;

- (id)segueWithDestinationViewController:(id)arg1;

@property(nonatomic) _Bool useDefaultModalPresentationStyle; // @synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle;

@property(nonatomic) _Bool useDefaultModalTransitionStyle; // @synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle;



@end


