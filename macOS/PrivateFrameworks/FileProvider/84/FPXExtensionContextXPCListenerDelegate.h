//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSXPCListenerDelegate-Protocol.h>

@class FPXExtensionContext, NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface FPXExtensionContextXPCListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    FPXExtensionContext *_context;
    NSXPCInterface *_interface;
    id _exportedObject;
    NSString *_messageInterfaceName;
}

@property(copy, nonatomic) NSString *messageInterfaceName; // @synthesize messageInterfaceName=_messageInterfaceName;
@property(retain, nonatomic) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(retain, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) FPXExtensionContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

