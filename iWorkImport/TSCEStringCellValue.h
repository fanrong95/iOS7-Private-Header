/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCECellValue.h"


__attribute__((visibility("hidden")))

@interface TSCEStringCellValue : TSCECellValue

{

    struct TSCEStringValue *mStringValue;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)displayString;

- (void)encodeToArchive:(struct StringCellValueArchive *)arg1;

- (CDStruct_95e644ef)formatStruct;

- (id)initWithArchive:(const struct StringCellValueArchive *)arg1;

- (id)initWithString:(id)arg1;

- (id)initWithStringValue:(struct TSCEStringValue *)arg1;

- (_Bool)isEqualToCellValue:(id)arg1;

- (struct TSCEStringValue *)stringValue;



@end

