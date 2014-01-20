/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMMapper.h"


@class PDSlideBase;



__attribute__((visibility("hidden")))

@interface PMSlideMapper : CMMapper

{

    PDSlideBase *mSlide;

    struct CGRect mRect;

}



- (id).cxx_construct;

- (id)defaultTheme;

- (id)initWithPDSlide:(id)arg1 slideRect:(struct CGRect)arg2 parent:(id)arg3;

- (void)mapAt:(id)arg1 withState:(id)arg2;

- (void)mapBackgroundAt:(id)arg1 recursive:(_Bool)arg2 withState:(id)arg3;

- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;

- (void)mapMasterGraphicsAt:(id)arg1 withState:(id)arg2;

- (void)mapMasterSlideAt:(id)arg1 withState:(id)arg2;

- (id)slideName;

- (struct CGRect)slideRect;

- (id)styleMatrix;



@end


