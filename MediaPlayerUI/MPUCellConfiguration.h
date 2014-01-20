/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface MPUCellConfiguration : NSObject

{

}



+ (void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(_Bool)arg5;

+ (void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(_Bool)arg5;

+ (void)configureView:(id)arg1 asynchronously:(_Bool)arg2 forEntity:(id)arg3 withBlock:(id)arg4;

+ (void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned long long)arg3;

+ (double)expandedTableViewCellHeight;

+ (void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2;

+ (id)tableViewBackgroundColor;

+ (id)tableViewCellBackgroundColor;

+ (Class)tableViewCellClass;

+ (double)tableViewCellHeight;

+ (id)tableViewSeparatorColor;

+ (struct UIEdgeInsets)tableViewSeparatorInset;

+ (long long)tableViewSeparatorStyle;

+ (_Bool)wantsScrollEvents;

+ (void)willDisplayCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned long long)arg3;



@end


