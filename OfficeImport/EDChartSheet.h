/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EDSheet.h"


@class CHDChart;



__attribute__((visibility("hidden")))

@interface EDChartSheet : EDSheet

{

    CHDChart *mMainChart;

    _Bool mIsBoundsSet;

    struct CGRect mBounds;

}



- (id).cxx_construct;

- (void)addDrawable:(id)arg1;

- (_Bool)areBoundsSet;

- (struct CGRect)bounds;

- (id)mainChart;

- (void)setBounds:(struct CGRect)arg1;

- (void)setMainChart:(id)arg1;

- (void)teardown;



@end


