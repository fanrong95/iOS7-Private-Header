/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDate, NSString;



@interface SKUIReleaseNote : NSObject

{

    NSString *_changeNotes;

    NSDate *_date;

    NSString *_versionString;

}



+ (id)dateFormatter;

- (void).cxx_destruct;

@property(readonly, nonatomic) NSString *changeNotes; // @synthesize changeNotes=_changeNotes;

@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;

- (id)initWithReleaseNoteDictionary:(id)arg1 dateFormatter:(id)arg2;

@property(readonly, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;



@end


