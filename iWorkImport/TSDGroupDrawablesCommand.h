/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDBaseGroupCommand.h"


__attribute__((visibility("hidden")))

@interface TSDGroupDrawablesCommand : TSDBaseGroupCommand

{

}



- (id)actionString;

- (void)commit;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithDrawables:(id)arg1 subcommandProvider:(id)arg2 objectContext:(id)arg3;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (void)undo;



@end


