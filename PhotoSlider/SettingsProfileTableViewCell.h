//
//  SettingsProfileTableViewCell.h
//  Example-ImageSDK-iOS
//
//  Created by Andrey Anisimov on 18.12.15.
//
//

#import <UIKit/UIKit.h>

@interface SettingsProfileTableViewCell : UITableViewCell
- (void) configureCell:(NSString*) text;
- (void) configureCell:(UIImage*) image andText:(NSString*) text;
@end
