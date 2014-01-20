/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EDCollection, EDResources, OADGraphicProperties;



__attribute__((visibility("hidden")))

@interface CHDLegend : NSObject

{

    int mLegendPosition;

    OADGraphicProperties *mGraphicProperties;

    unsigned long long mFontIndex;

    EDCollection *mLegendEntries;

    EDResources *mResources;

    _Bool mIsVertical;

}



- (void)dealloc;

- (id)font;

- (unsigned long long)fontIndex;

- (id)graphicProperties;

- (id)initWithResources:(id)arg1;

- (_Bool)isSingleColumnLegend;

- (id)legendEntries;

- (int)legendPosition;

- (void)setFont:(id)arg1;

- (void)setFontIndex:(unsigned long long)arg1;

- (void)setGraphicProperties:(id)arg1;

- (void)setIsSingleColumnLegend:(_Bool)arg1;

- (void)setLegendPosition:(int)arg1;



@end


