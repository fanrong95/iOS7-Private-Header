/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSMutableArray, NSString;



@interface UIKBCacheToken : NSObject <NSCopying>

{

    NSMutableArray *_components;

    NSString *_name;

    double _scale;

    int _emptyFields;

    long long _renderFlags;

}



+ (id)tokenForKey:(id)arg1 style:(CDStruct_961fb75c)arg2;

+ (id)tokenForKey:(id)arg1 style:(CDStruct_961fb75c)arg2 displayInsets:(struct UIEdgeInsets)arg3;

+ (id)tokenForKeyMask:(id)arg1 style:(CDStruct_961fb75c)arg2 displayInsets:(struct UIEdgeInsets)arg3;

+ (id)tokenForKeyplane:(id)arg1;

+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;

+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize)arg4;

+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;

- (int)_writeArray:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;

- (int)_writeEdgeInsets:(struct UIEdgeInsets)arg1 toStr:(char *)arg2 maxLen:(int)arg3;

- (int)_writeNumber:(float)arg1 toStr:(char *)arg2;

- (int)_writeString:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(nonatomic) int displayHint;

@property(nonatomic) int emptyFields; // @synthesize emptyFields=_emptyFields;

@property(readonly, nonatomic) _Bool hasKey;

- (id)initWithComponents:(id)arg1 name:(id)arg2;

- (id)initWithName:(id)arg1;

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@property(nonatomic) long long renderFlags; // @synthesize renderFlags=_renderFlags;

@property(nonatomic) int rowHint;

@property(nonatomic) struct CGSize size;

@property(readonly, nonatomic) NSString *string;

- (id)stringForComponentArray:(id)arg1 additionalValues:(id)arg2;

- (id)stringForConstruction:(id)arg1;

- (id)stringForKey:(id)arg1 state:(int)arg2;

- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(_Bool)arg2;

- (id)stringForSplitState:(_Bool)arg1;

- (id)stringForState:(int)arg1;



@end


