/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MFObject.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface MFPalette : NSObject <MFObject>

{

    NSMutableArray *m_colours;

}



+ (id)paletteWithColours:(id)arg1;

- (void)dealloc;

- (id)getColour:(int)arg1;

- (id)init;

- (id)initWithColours:(id)arg1;

- (_Bool)resize:(int)arg1;

- (int)selectInto:(id)arg1;

- (_Bool)setEntries:(int)arg1:(id)arg2;



@end


