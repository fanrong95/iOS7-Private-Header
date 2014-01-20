/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface SBFColorBoxes : NSObject

{

    struct **_colorBoxes;

    unsigned long long _rowCount;

    unsigned long long _columnCount;

    unsigned long long _size;

    double _contrast;

}



- (void)_freeColorBoxes;

@property(readonly, nonatomic) struct **colorBoxes; // @synthesize colorBoxes=_colorBoxes;

@property(readonly, nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;

@property(readonly, nonatomic) double contrast; // @synthesize contrast=_contrast;

- (void)dealloc;

- (id)description;

- (id)initWithColorBoxes:(struct **)arg1 size:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 columnCount:(unsigned long long)arg4 contrast:(double)arg5;

@property(readonly, nonatomic) unsigned long long rowCount; // @synthesize rowCount=_rowCount;

@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;



@end


