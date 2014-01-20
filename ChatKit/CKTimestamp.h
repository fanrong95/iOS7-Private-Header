/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CKTranscriptDataRowObject.h"



@class NSAttributedString, NSDate, NSString;



@interface CKTimestamp : NSObject <CKTranscriptDataRowObject>

{

    NSDate *_date;

    id <CKMessage> _message;

}



+ (id)thePastDateFormatter;

+ (id)thisWeekRelativeDateFormatter;

+ (id)thisYearDateFormatter;

+ (id)timestampWithDate:(id)arg1 message:(id)arg2;

- (Class)__ck_displayCellClass;

- (id)__ck_displayCellIdentifier;

- (id)__ck_displayContactImage;

- (struct UIEdgeInsets)__ck_displayContentAlignmentInsets;

- (_Bool)__ck_displayDuringSend;

- (id)__ck_displayGUIDWithMessage:(id)arg1;

- (struct CGSize)__ck_displaySize:(struct UIEdgeInsets *)arg1;

- (BOOL)__ck_displayTranscriptOrientation;

- (void)__ck_prewarmForDisplay;

- (_Bool)__ck_transcriptUsesTextAlignmentInsets;

- (_Bool)__ck_wantsDrawerLayout;

@property(readonly, nonatomic) NSAttributedString *attributedTranscriptText;

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSString *guid;

- (id)initWithDate:(id)arg1 message:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) id <CKMessage> message; // @synthesize message=_message;

- (id)now;

- (id)timestampCache;



@end


