/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMProperty.h"


__attribute__((visibility("hidden")))

@interface EMEnumProperty : CMProperty

{

    int wdValue;

}



+ (id)mapHorizontalAlignmentValue:(int)arg1;

+ (id)mapUnderlineValue:(int)arg1;

+ (id)mapVerticalAlignmentValue:(int)arg1;

- (id)cssStringForName:(id)arg1;

- (id)initWithEnum:(int)arg1;

- (id)mapHorizontalAlignment;

- (id)mapUnderline;

- (id)mapVerticalAlignment;

- (int)value;



@end


