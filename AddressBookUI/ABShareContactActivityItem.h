/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIActivityItemSource.h"

#import "UIActivityItemSourceAttachment.h"



@class CNContact;



@interface ABShareContactActivityItem : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment>

{

    CNContact *_contact;

}



- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;

- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;

- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;

- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;

- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;

- (id)activityViewControllerPlaceholderItem:(id)arg1;

@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;

- (void)dealloc;

- (id)initWithContact:(id)arg1;



@end


