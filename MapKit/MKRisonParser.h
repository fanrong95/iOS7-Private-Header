/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableCharacterSet, NSNumberFormatter;



__attribute__((visibility("hidden")))

@interface MKRisonParser : NSObject

{

    NSNumberFormatter *_formatter;

    NSMutableCharacterSet *_risonTerminators;

    NSMutableCharacterSet *_risonEscapes;

}



- (id)arrayWithReaderInfo:(CDStruct_8bf61218 *)arg1;

- (id)boolWithReaderInfo:(CDStruct_8bf61218 *)arg1;

- (void)dealloc;

- (id)dictionaryWithReaderInfo:(CDStruct_8bf61218 *)arg1;

- (id)init;

- (id)keyWithReaderInfo:(CDStruct_8bf61218 *)arg1;

- (id)nullWithReaderInfo:(CDStruct_8bf61218 *)arg1;

- (id)numberWithReaderInfo:(CDStruct_8bf61218 *)arg1;

- (id)objectFromRisonString:(id)arg1;

- (id)objectWithReaderInfo:(CDStruct_8bf61218 *)arg1;

- (id)stringFromArray:(id)arg1;

- (id)stringFromDictionary:(id)arg1;

- (id)stringFromNull:(id)arg1;

- (id)stringFromNumber:(id)arg1;

- (id)stringFromRisonObject:(id)arg1;

- (id)stringFromString:(id)arg1;

- (id)stringLiteralWithReaderInfo:(CDStruct_8bf61218 *)arg1;



@end


