/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFPEffect.h"


__attribute__((visibility("hidden")))

@interface MFPColorLUTEffect : MFPEffect

{

    unsigned char mLutA[256];

    unsigned char mLutR[256];

    unsigned char mLutG[256];

    unsigned char mLutB[256];

}



+ (id)GUID;

- (id)initWithLUTA:(unsigned char [256])arg1 LUTR:(unsigned char [256])arg2 LUTG:(unsigned char [256])arg3 LUTB:(unsigned char [256])arg4;



@end


