/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GQDTCell.h"


@class GQDTComputedFormatSpec;



__attribute__((visibility("hidden")))

@interface GQDTDateCell : GQDTCell

{

    struct __CFDate *mDate;

    GQDTComputedFormatSpec *mComputedFormat;

}



- (struct __CFString *)createStringValue;

- (struct __CFDate *)date;

- (void)dealloc;

- (struct __CFString *)getDateFormat;

- (int)readAttributesForDateCell:(struct _xmlTextReader *)arg1 processor:(id)arg2;



@end


