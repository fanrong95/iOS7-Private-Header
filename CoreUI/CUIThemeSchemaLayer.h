/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSString;



@interface CUIThemeSchemaLayer : NSObject

{

    NSArray *_renditions;

    NSString *_name;

    unsigned long long _index;

}



+ (id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;

- (void)calculateColumLefts:(id *)arg1 rowTops:(id *)arg2 totalSize:(struct CGSize *)arg3 forPartFeatures:(unsigned long long)arg4;

@property(nonatomic) unsigned long long index; // @synthesize index=_index;

- (id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@property(retain, nonatomic) NSArray *renditions; // @synthesize renditions=_renditions;

- (double)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id *)arg2;



@end

