/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface PDPlaceholder : NSObject

{

    int mType;

    int mOrientation;

    int mSize;

    int mIndex;

    int mBoundsTrack;

}



- (int)boundsTrack;

- (int)index;

- (id)init;

- (int)orientation;

- (void)setBoundsTrack:(int)arg1;

- (void)setIndex:(int)arg1;

- (void)setOrientation:(int)arg1;

- (void)setSize:(int)arg1;

- (void)setType:(int)arg1;

- (int)size;

- (int)type;



@end


