//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearchObservableProvider-Protocol.h>

@class CNAutocompleteFetchRequest, NSString;
@protocol CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteSearchObservableProvider : NSObject <CNAutocompleteSearchObservableProvider>
{
    id <CNAutocompleteSearchProvider> _searchProvider;
    CNAutocompleteFetchRequest *_fetchRequest;
    id <CNScheduler> _scheduler;
}

+ (id)providerWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
@property(readonly, nonatomic) id <CNAutocompleteSearchProvider> searchProvider; // @synthesize searchProvider=_searchProvider;
- (void).cxx_destruct;
- (id)observableWithWrappedSearchProviderGetter:(CDUnknownBlockType)arg1 name:(id)arg2;
- (id)calendarServersSearchObservable;
- (id)directoryServersSearchObservable;
- (id)predictionsSearchObservableWithUnfilteredResultPromise:(id)arg1;
- (id)suggestionsSearchObservable;
- (id)recentsSearchObservable;
- (id)localSearchObservable;
- (id)initWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

