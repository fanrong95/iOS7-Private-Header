/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TextFilePane.h"



#import "MFMailComposeViewControllerDelegate.h"



@class MFMailComposeViewController, PSRootController, UIBarButtonItem;



@interface PropertyListPane : TextFilePane <MFMailComposeViewControllerDelegate>

{

    UIBarButtonItem *_emailButton;

    MFMailComposeViewController *_mailComposeController;

    PSRootController *_rootController;

}



- (void)dealloc;

@property(retain, nonatomic) UIBarButtonItem *emailButton; // @synthesize emailButton=_emailButton;

- (void)emailFile:(id)arg1;

@property(retain, nonatomic) MFMailComposeViewController *mailComposeController; // @synthesize mailComposeController=_mailComposeController;

- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;

@property(nonatomic) PSRootController *rootController; // @synthesize rootController=_rootController;

- (void)setPreferenceSpecifier:(id)arg1;



@end


