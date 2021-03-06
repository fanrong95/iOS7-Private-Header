/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextCommand.h"


@class NSDate, TSWPDateTimeSmartField;



__attribute__((visibility("hidden")))

@interface TSWPUpdateDateTimeFieldCommand : TSWPTextCommand

{

    TSWPDateTimeSmartField *_dateTimeField;

    NSDate *_date;

    long long _dateStyle;

    long long _timeStyle;

}



- (void)dealloc;

- (void)doCommit;

- (void)doUndoRedo;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithStorage:(id)arg1 selection:(id)arg2 dateTimeField:(id)arg3 date:(id)arg4 dateStyle:(long long)arg5 timeStyle:(long long)arg6;

- (void)loadFromArchive:(const struct UpdateDateTimeFieldCommandArchive *)arg1 unarchiver:(id)arg2;

- (void)p_updateFieldProperties;

- (int)persistenceKind;

- (void)saveToArchive:(struct UpdateDateTimeFieldCommandArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;



@end


