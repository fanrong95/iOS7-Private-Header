/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPShapeInfo.h"


#import "TSDAnnotationHosting.h"



@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;



__attribute__((visibility("hidden")))

@interface TSWPCommentInfo : TSWPShapeInfo <TSDAnnotationHosting>

{

    TSDCommentStorage *_commentStorage;

}



+ (id)bezierPathForExportCommentOutline;

+ (id)commentInfoWithContext:(id)arg1 size:(struct CGSize)arg2 storage:(id)arg3;

+ (id)commentStyleIdentifier;

+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1;

+ (id)p_defaultCommentInfoStyleInStylesheet:(id)arg1;

@property(readonly, nonatomic) int annotationDisplayStringType;

@property(readonly, nonatomic) int annotationType;

@property(retain, nonatomic) TSKAnnotationAuthor *author;

@property(readonly, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;

- (void)commitText:(id)arg1;

- (id)copyWithContext:(id)arg1;

- (id)creationDateString;

@property(readonly, nonatomic) NSDate *date;

- (Class)editorClass;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5;

- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;

- (_Bool)isLockable;

- (Class)layoutClass;

- (void)loadFromArchive:(const struct CommentInfoArchive *)arg1 unarchiver:(id)arg2;

@property(nonatomic) id <TSKModel> model;

- (id)pathSourceForExportCommentOutline;

- (Class)repClass;

- (void)saveToArchive:(struct CommentInfoArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (id)searchForAnnotationsWithHitBlock:(id)arg1;

@property(copy, nonatomic) TSDCommentStorage *storage;

- (_Bool)supportsAttachedComments;

- (_Bool)supportsHyperlinks;

- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;

- (void)wasRemovedFromDocumentRoot:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) NSString *changeTrackingString;



@end

