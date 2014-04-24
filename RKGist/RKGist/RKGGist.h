//
//  RKGGist.h
//  Pods
//
//  Created by Kevin O'Mara on 4/24/14.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RKGFile, RKGUser;

@interface RKGGist : NSManagedObject

@property (nonatomic, retain) NSDate * createdAt;
@property (nonatomic, retain) NSString * descriptionText;
@property (nonatomic, retain) NSNumber * gistID;
@property (nonatomic, retain) id htmlURL;
@property (nonatomic, retain) id jsonURL;
@property (nonatomic, retain) NSNumber * public;
@property (nonatomic, retain) NSDate * updatedAt;
@property (nonatomic, retain) NSSet *files;
@property (nonatomic, retain) RKGUser *user;

@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) NSString *subtitleText;

@end

@interface RKGGist (CoreDataGeneratedAccessors)

- (void)addFilesObject:(RKGFile *)value;
- (void)removeFilesObject:(RKGFile *)value;
- (void)addFiles:(NSSet *)values;
- (void)removeFiles:(NSSet *)values;

@end
