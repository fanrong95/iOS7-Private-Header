/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDStroke.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface TSDSmartStroke : TSDStroke

{

    NSString *mStrokeName;

}



+ (Class)classForName:(id)arg1;

+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;

- (_Bool)canApplyDirectlyToRepCALayer;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (unsigned long long)hash;

- (id)initWithArchive:(const struct StrokeArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;

- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6;

- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;

- (_Bool)isEqual:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (void)saveToArchive:(struct StrokeArchive *)arg1 archiver:(id)arg2;

@property(copy, nonatomic) NSString *strokeName; // @synthesize strokeName=mStrokeName;

- (_Bool)shouldAntialiasDefeat;



@end


