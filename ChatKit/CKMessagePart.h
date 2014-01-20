/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CKTranscriptDataRowObject.h"



@class NSAttributedString, NSString;



@interface CKMessagePart : NSObject <CKTranscriptDataRowObject>

{

    BOOL _color;

    NSString *_guid;

    NSAttributedString *_displayText;

    id <CKMessage> _parentMessage;

    long long _partID;

}



+ (id)messagePartsWithComposition:(id)arg1;

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

- (Class)balloonViewClass;

@property(nonatomic) BOOL color; // @synthesize color=_color;

- (id)composeImages;

- (id)compositionRepresentation;

- (void)contentSizeCategoryDidChange:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)detachedCopy;

@property(readonly, nonatomic) NSAttributedString *displayText; // @synthesize displayText=_displayText;

@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;

- (id)highlightData;

- (id)image;

- (id)imageData;

- (id)imageFilename;

- (id)init;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) _Bool isOutgoing;

- (_Bool)isSeparateSubjectPart;

- (id)mediaObject;

@property(nonatomic) id <CKMessage> parentMessage; // @synthesize parentMessage=_parentMessage;

@property(nonatomic) long long partID; // @synthesize partID=_partID;

- (id)pasteboardItems;

- (id)previewImage;

- (id)previewText;

- (id)text;

- (int)type;



@end


