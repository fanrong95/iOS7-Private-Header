/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TPNumberPad.h"


#import "TPDialerKeypadProtocol.h"



@class TPDialerSoundController;



@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol>

{

    _Bool _playsSounds;

    id <TPDialerKeypadDelegate> _delegate;

    TPDialerSoundController *_soundController;

}



+ (id)dialerNumberPadFullCharacters;

+ (id)dialerNumberPadNumericCharacters;

- (void)buttonDown:(id)arg1;

- (void)buttonLongPressed:(id)arg1;

- (void)buttonTapped:(id)arg1;

- (void)buttonUp:(id)arg1;

- (void)dealloc;

@property id <TPDialerKeypadDelegate> delegate; // @synthesize delegate=_delegate;

- (void)highlightKeyAtIndex:(long long)arg1;

- (long long)indexForHighlightedKey;

@property(nonatomic) _Bool playsSounds; // @synthesize playsSounds=_playsSounds;

@property(retain) TPDialerSoundController *soundController; // @synthesize soundController=_soundController;

- (void)setSupportsHardPause:(_Bool)arg1;

- (_Bool)supportsHardPause;



@end


