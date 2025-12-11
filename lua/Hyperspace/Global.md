---
layout: lua
title: Global
lang: en
---

# Class "Global"




## Static Methods
### GetInstance ()
{: aria-label='StaticMethods' }
#### [Global](../Hyperspace/Global) .GetInstance ()
{: aria-label='StaticMethods' }
Returns the main instance of [`Global`](#Global). Always use this to access any members and methods belonging to this class. `Hyperspace.Global.GetInstance()`

______
### IsSeededRun ()
{: aria-label='StaticMethods' }
#### boolean .IsSeededRun ()
{: aria-label='StaticMethods' }

___


## Methods
### GetAnimationControl ()
{: aria-label='Methods' }
#### [AnimationControl](../Hyperspace/AnimationControl) :GetAnimationControl ()
{: aria-label='Methods' }
Returns the main instance of [`AnimationControl`](#AnimationControl). Always use this to access any members and methods belonging to the [`AnimationControl`](#AnimationControl) class, or the shortcut `Hyperspace.Animations`.

______
### GetBlueprints ()
{: aria-label='Methods' }
#### [BlueprintManager](../Hyperspace/BlueprintManager) :GetBlueprints ()
{: aria-label='Methods' }
Returns the main instance of [`BlueprintManager`](#BlueprintManager). Always use this to access any members and methods belonging to the [`BlueprintManager`](#BlueprintManager) class, or the shortcut `Hyperspace.Blueprints`.

______
### GetCApp ()
{: aria-label='Methods' }
#### [CApp](../Hyperspace/CApp) :GetCApp ()
{: aria-label='Methods' }
Returns the main instance of [`CApp`](#CApp). Always use this to access any members and methods belonging to the [`CApp`](#CApp) class, or the shortcut `Hyperspace.App`.

______
### GetCrewFactory ()
{: aria-label='Methods' }
#### [CrewMemberFactory](../Hyperspace/CrewMemberFactory) :GetCrewFactory ()
{: aria-label='Methods' }
Returns the main instance of [`CrewMemberFactory`](#CrewMemberFactory). Always use this to access any members and methods belonging to the [`CrewMemberFactory`](#CrewMemberFactory) class, or the shortcut `Hyperspace.CrewFactory`.

______
### GetEventGenerator ()
{: aria-label='Methods' }
#### [EventGenerator](../Hyperspace/EventGenerator) :GetEventGenerator ()
{: aria-label='Methods' }
Returns the main instance of [`EventGenerator`](#EventGenerator). Always use this to access any members and methods belonging to the [`EventGenerator`](#EventGenerator) class, or the shortcut `Hyperspace.Event`.

______
### GetMouseControl ()
{: aria-label='Methods' }
#### [MouseControl](../Hyperspace/MouseControl) :GetMouseControl ()
{: aria-label='Methods' }
Returns the main instance of [`MouseControl`](#MouseControl). Always use this to access any members and methods belonging to the [`MouseControl`](#MouseControl) class, or the shortcut `Hyperspace.Mouse`.

______
### GetScoreKeeper ()
{: aria-label='Methods' }
#### [ScoreKeeper](../Hyperspace/ScoreKeeper) :GetScoreKeeper ()
{: aria-label='Methods' }
Returns the main instance of [`ScoreKeeper`](#ScoreKeeper). Always use this to access any members and methods belonging to the [`ScoreKeeper`](#ScoreKeeper) class, or the shortcut `Hyperspace.Score`.

______
### GetShipInfo ()
{: aria-label='Methods' }
#### [ShipInfo](../Hyperspace/ShipInfo) :GetShipInfo (boolean enemy=false)
{: aria-label='Methods' }
Returns [`ShipInfo`](#ShipInfo) for the player ship if `enemy` is `false`, or for the enemy ship if `enemy` is `true`.

______
### GetShipManager ()
{: aria-label='Methods' }
#### [ShipManager](../Hyperspace/ShipManager) :GetShipManager (integer iShipId)
{: aria-label='Methods' }
Returns the instance of [`ShipManager`](#ShipManager) associated with the given ID (can be 0 or 1). If a ship does not exist for the given ID, returns `nil`.

______
### GetSoundControl ()
{: aria-label='Methods' }
#### [SoundControl](../Hyperspace/SoundControl) :GetSoundControl ()
{: aria-label='Methods' }
Returns the main instance of [`SoundControl`](#SoundControl). Always use this to access any members and methods belonging to the [`SoundControl`](#SoundControl) class, or the shortcut `Hyperspace.Sounds`.

______
### GetTextLibrary ()
{: aria-label='Methods' }
#### [TextLibrary](../Hyperspace/TextLibrary) :GetTextLibrary ()
{: aria-label='Methods' }
Returns the main instance of [`TextLibrary`](#TextLibrary). Always use this to access any members and methods belonging to the [`TextLibrary`](#TextLibrary) class, or the shortcut `Hyperspace.Text`.

______
### GetTutorialManager ()
{: aria-label='Methods' }
#### [TutorialManager](../Hyperspace/TutorialManager) :GetTutorialManager ()
{: aria-label='Methods' }
Returns the main instance of [`TutorialManager`](#TutorialManager). Always use this to access any members and methods belonging to the [`TutorialManager`](#TutorialManager) class, or the shortcut `Hyperspace.Tutorial`.

___


## Fields
### currentSeed (Read-only)
{: aria-label='Fields' }
#### uint .currentSeed
{: aria-label='Fields' }
**Read-only**
The seed for the run.

___
