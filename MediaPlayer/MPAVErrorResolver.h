/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface MPAVErrorResolver : NSObject

{

    id <MPAVErrorResolverDelegate> _delegate;

}



- (void).cxx_destruct;

@property(nonatomic) __weak id <MPAVErrorResolverDelegate> delegate; // @synthesize delegate=_delegate;

- (void)resolveError:(id)arg1;

- (void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2;



@end


