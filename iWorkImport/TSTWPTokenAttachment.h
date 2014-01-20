/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPUIGraphicalAttachment.h"


@class TSTExpressionNode;



__attribute__((visibility("hidden")))

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment

{

    TSTExpressionNode *mExpressionNode;

    _Bool mActive;

    _Bool mSelected;

    _Bool mNeverShowsMenu;

    struct CGSize mTextSize;

    struct CGRect mMenuRect;

    struct CGImage *mCachedImage;

    double mCachedImageScreenScale;

    _Bool mInInvalidate;

}



- (id).cxx_construct;

@property(nonatomic) struct CGImage *cachedImage;

@property(nonatomic) double cachedImageScreenScale; // @synthesize cachedImageScreenScale=mCachedImageScreenScale;

- (id)copyIntoContext:(id)arg1;

- (id)copyIntoContext:(id)arg1 bakeModes:(_Bool)arg2;

- (void)dealloc;

- (id)description;

- (id)detokenizedText;

@property(retain, nonatomic) TSTExpressionNode *expressionNode; // @synthesize expressionNode=mExpressionNode;

- (id)formulaPlainText;

- (id)initFromArchive:(const struct TokenAttachmentArchive *)arg1 unarchiver:(id)arg2;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;

- (void)invalidate;

@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=mActive;

@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=mSelected;

@property(nonatomic, getter=neverShowsMenu) _Bool neverShowsMenu; // @synthesize neverShowsMenu=mNeverShowsMenu;

- (void)requestRedraw;

- (void)saveToArchive:(struct TokenAttachmentArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;



@end


