/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GCController, GCControllerButtonInput, GCControllerDirectionPad;



@interface GCGamepad : NSObject

{

}



+ (_Bool)supportsUSBInterfaceProtocol:(unsigned char)arg1;

- (id)button0;

- (id)button1;

- (id)button2;

- (id)button3;

@property(readonly) GCControllerButtonInput *buttonA;

@property(readonly) GCControllerButtonInput *buttonB;

@property(readonly) GCControllerButtonInput *buttonX;

@property(readonly) GCControllerButtonInput *buttonY;

@property(readonly) GCController *controller;

- (void)didChangeValueForElement:(id)arg1;

@property(readonly) GCControllerDirectionPad *dpad;

- (id)initWithController:(id)arg1;

- (id)inputForElement:(struct __IOHIDElement *)arg1;

@property(readonly) GCControllerButtonInput *leftShoulder;

@property(readonly) GCControllerButtonInput *rightShoulder;

- (id)saveSnapshot;

- (void)setButton:(id)arg1 pressed:(_Bool)arg2;

- (void)setButton:(id)arg1 value:(double)arg2;

- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;

@property(copy) id valueChangedHandler;



@end


