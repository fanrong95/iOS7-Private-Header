/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableArray, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface KNAnimationPluginMenu : NSObject

{

    NSMutableDictionary *mLocalizedStringToDirectionMap;

    NSMutableDictionary *mDirectionToLocalizedStringMap;

    unsigned long long mDefaultDirection;

    NSMutableArray *mLocalizedDirections;

    NSMutableArray *mDirections;

}



+ (id)animationPluginMenu;

+ (id)localizedStringForDirection:(unsigned long long)arg1 shortVersion:(_Bool)arg2;

- (void)addDirection:(unsigned long long)arg1 localizedMenuString:(id)arg2;

- (void)addDirection:(unsigned long long)arg1 useShortString:(_Bool)arg2;

- (_Bool)containsDirection:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned long long count;

- (void)dealloc;

@property(nonatomic) unsigned long long defaultDirection; // @synthesize defaultDirection=mDefaultDirection;

- (unsigned long long)directionForIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) NSArray *directions; // @synthesize directions=mDirections;

- (unsigned long long)indexForDirection:(unsigned long long)arg1;

- (id)init;

@property(readonly, nonatomic) NSArray *localizedDirections; // @synthesize localizedDirections=mLocalizedDirections;



@end


