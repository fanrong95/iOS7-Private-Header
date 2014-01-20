/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSArray, UIColor;



@interface SUPageSectionGroup : NSObject <NSCopying>

{

    long long _defaultSectionIndex;

    NSArray *_sections;

    long long _style;

    UIColor *_tintColor;

    long long _tintStyle;

}



- (long long)_sectionStyleForString:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(nonatomic) long long defaultSectionIndex; // @synthesize defaultSectionIndex=_defaultSectionIndex;

- (id)initWithSectionsDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (_Bool)loadFromDictionary:(id)arg1;

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;

@property(nonatomic) long long style; // @synthesize style=_style;

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

@property(nonatomic) long long tintStyle; // @synthesize tintStyle=_tintStyle;



@end


