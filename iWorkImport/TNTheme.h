/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSATheme.h"


@class NSArray;



__attribute__((visibility("hidden")))

@interface TNTheme : TSATheme

{

    NSArray *mTablePrototypes;

}



+ (void)initialize;

- (void)bootstrapBlackHardCodedTheme;

- (void)bootstrapWhiteHardCodedTheme;

- (id)initFromUnarchiver:(id)arg1;

- (void)loadFromArchive:(const struct ThemeArchive *)arg1 unarchiver:(id)arg2;

- (void)p_initDefaultHardCodedStyles;

- (void)saveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(retain, nonatomic) NSArray *tablePrototypes;



@end


