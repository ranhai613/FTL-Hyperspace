---
layout: lua
title: CrewMember
lang: en
category: Class
---

# Class "CrewMember"


## Constructors
{: #Constructors .lua-content-section}
### CrewMember ()
{: #CrewMember .lua-content-item aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ()
{: aria-label='Constructors' }

___
### CrewMember ()
{: #CrewMember .lua-content-item aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp, integer shipId, boolean enemy, [CrewAnimation](../Hyperspace/CrewAnimation) animation)
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .lua-content-section}
### GetSkillFromSystem ()
{: #GetSkillFromSystem .lua-content-item aria-label='StaticMethods' }
#### integer .GetSkillFromSystem (integer systemId)
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .lua-content-section}
### ActivatePower ()
{: #ActivatePower .lua-content-item aria-label='Methods' }
#### void :ActivatePower ()
{: aria-label='Methods' }

___
### ApplyDamage ()
{: #ApplyDamage .lua-content-item aria-label='Methods' }
#### boolean :ApplyDamage (number damage)
{: aria-label='Methods' }

___
### AtFinalGoal ()
{: #AtFinalGoal .lua-content-item aria-label='Methods' }
#### boolean :AtFinalGoal ()
{: aria-label='Methods' }

___
### AtGoal ()
{: #AtGoal .lua-content-item aria-label='Methods' }
#### boolean :AtGoal ()
{: aria-label='Methods' }

___
### BadAtCombat ()
{: #BadAtCombat .lua-content-item aria-label='Methods' }
#### boolean :BadAtCombat ()
{: aria-label='Methods' }

___
### BlockRoom ()
{: #BlockRoom .lua-content-item aria-label='Methods' }
#### integer :BlockRoom ()
{: aria-label='Methods' }

___
### CanBurn ()
{: #CanBurn .lua-content-item aria-label='Methods' }
#### boolean :CanBurn ()
{: aria-label='Methods' }

___
### CanFight ()
{: #CanFight .lua-content-item aria-label='Methods' }
#### boolean :CanFight ()
{: aria-label='Methods' }

___
### CanHeal ()
{: #CanHeal .lua-content-item aria-label='Methods' }
#### boolean :CanHeal ()
{: aria-label='Methods' }

___
### CanMan ()
{: #CanMan .lua-content-item aria-label='Methods' }
#### boolean :CanMan ()
{: aria-label='Methods' }

___
### CanRepair ()
{: #CanRepair .lua-content-item aria-label='Methods' }
#### boolean :CanRepair ()
{: aria-label='Methods' }

___
### CanSabotage ()
{: #CanSabotage .lua-content-item aria-label='Methods' }
#### boolean :CanSabotage ()
{: aria-label='Methods' }

___
### CanStim ()
{: #CanStim .lua-content-item aria-label='Methods' }
#### boolean :CanStim ()
{: aria-label='Methods' }

___
### CanSuffocate ()
{: #CanSuffocate .lua-content-item aria-label='Methods' }
#### boolean :CanSuffocate ()
{: aria-label='Methods' }

___
### CanTeleport ()
{: #CanTeleport .lua-content-item aria-label='Methods' }
#### boolean :CanTeleport ()
{: aria-label='Methods' }

___
### CheckFighting ()
{: #CheckFighting .lua-content-item aria-label='Methods' }
#### void :CheckFighting ()
{: aria-label='Methods' }

___
### CheckForTeleport ()
{: #CheckForTeleport .lua-content-item aria-label='Methods' }
#### void :CheckForTeleport ()
{: aria-label='Methods' }

___
### CheckRoomPath ()
{: #CheckRoomPath .lua-content-item aria-label='Methods' }
#### boolean :CheckRoomPath (integer roomId)
{: aria-label='Methods' }

___
### CheckSkills ()
{: #CheckSkills .lua-content-item aria-label='Methods' }
#### void :CheckSkills ()
{: aria-label='Methods' }

___
### Cleanup ()
{: #Cleanup .lua-content-item aria-label='Methods' }
#### void :Cleanup ()
{: aria-label='Methods' }

___
### ClearPath ()
{: #ClearPath .lua-content-item aria-label='Methods' }
#### void :ClearPath ()
{: aria-label='Methods' }

___
### ClearPosition ()
{: #ClearPosition .lua-content-item aria-label='Methods' }
#### void :ClearPosition ()
{: aria-label='Methods' }

___
### ClearTask ()
{: #ClearTask .lua-content-item aria-label='Methods' }
#### void :ClearTask ()
{: aria-label='Methods' }

___
### Clone ()
{: #Clone .lua-content-item aria-label='Methods' }
#### void :Clone ()
{: aria-label='Methods' }

___
### CloseDoorBehind ()
{: #CloseDoorBehind .lua-content-item aria-label='Methods' }
#### void :CloseDoorBehind ([Door](../Hyperspace/Door) door)
{: aria-label='Methods' }

___
### ContainsPoint ()
{: #ContainsPoint .lua-content-item aria-label='Methods' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Methods' }

___
### CountForVictory ()
{: #CountForVictory .lua-content-item aria-label='Methods' }
#### boolean :CountForVictory ()
{: aria-label='Methods' }

___
### CycleColorLayer ()
{: #CycleColorLayer .lua-content-item aria-label='Methods' }
#### void :CycleColorLayer (integer unk)
{: aria-label='Methods' }

___
### DirectModifyHealth ()
{: #DirectModifyHealth .lua-content-item aria-label='Methods' }
#### boolean :DirectModifyHealth (number health)
{: aria-label='Methods' }

___
### EmptySlot ()
{: #EmptySlot .lua-content-item aria-label='Methods' }
#### void :EmptySlot ()
{: aria-label='Methods' }

___
### ExactTarget ()
{: #ExactTarget .lua-content-item aria-label='Methods' }
#### boolean :ExactTarget ()
{: aria-label='Methods' }

___
### FindSlot ()
{: #FindSlot .lua-content-item aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :FindSlot (integer roomId, integer slotId, boolean closeEnough)
{: aria-label='Methods' }

___
### FireFightingSoundEffect ()
{: #FireFightingSoundEffect .lua-content-item aria-label='Methods' }
#### boolean :FireFightingSoundEffect ()
{: aria-label='Methods' }

___
### ForceMindControl ()
{: #ForceMindControl .lua-content-item aria-label='Methods' }
#### void :ForceMindControl (boolean force)
{: aria-label='Methods' }

___
### Functional ()
{: #Functional .lua-content-item aria-label='Methods' }
#### boolean :Functional ()
{: aria-label='Methods' }

___
### GetControllable ()
{: #GetControllable .lua-content-item aria-label='Methods' }
#### boolean :GetControllable ()
{: aria-label='Methods' }

___
### GetDamageMultiplier ()
{: #GetDamageMultiplier .lua-content-item aria-label='Methods' }
#### number :GetDamageMultiplier ()
{: aria-label='Methods' }

___
### GetFinalGoal ()
{: #GetFinalGoal .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetFinalGoal ()
{: aria-label='Methods' }

___
### GetFireRepairMultiplier ()
{: #GetFireRepairMultiplier .lua-content-item aria-label='Methods' }
#### number :GetFireRepairMultiplier ()
{: aria-label='Methods' }

___
### GetIntegerHealth ()
{: #GetIntegerHealth .lua-content-item aria-label='Methods' }
#### integer :GetIntegerHealth ()
{: aria-label='Methods' }

___
### GetIntruder ()
{: #GetIntruder .lua-content-item aria-label='Methods' }
#### boolean :GetIntruder ()
{: aria-label='Methods' }

___
### GetLocation ()
{: #GetLocation .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetLocation ()
{: aria-label='Methods' }

___
### GetLongName ()
{: #GetLongName .lua-content-item aria-label='Methods' }
#### string :GetLongName ()
{: aria-label='Methods' }

___
### GetMaxHealth ()
{: #GetMaxHealth .lua-content-item aria-label='Methods' }
#### integer :GetMaxHealth ()
{: aria-label='Methods' }

___
### GetMoveSpeed ()
{: #GetMoveSpeed .lua-content-item aria-label='Methods' }
#### number :GetMoveSpeed ()
{: aria-label='Methods' }

___
### GetMoveSpeedMultiplier ()
{: #GetMoveSpeedMultiplier .lua-content-item aria-label='Methods' }
#### number :GetMoveSpeedMultiplier ()
{: aria-label='Methods' }

___
### GetName ()
{: #GetName .lua-content-item aria-label='Methods' }
#### string :GetName ()
{: aria-label='Methods' }

___
### GetNewGoal ()
{: #GetNewGoal .lua-content-item aria-label='Methods' }
#### boolean :GetNewGoal ()
{: aria-label='Methods' }

___
### GetNextGoal ()
{: #GetNextGoal .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetNextGoal ()
{: aria-label='Methods' }

___
### GetPosition ()
{: #GetPosition .lua-content-item aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetPosition ()
{: aria-label='Methods' }

___
### GetPowerCooldown ()
{: #GetPowerCooldown .lua-content-item aria-label='Methods' }
#### pair\<number, number\> :GetPowerCooldown ()
{: aria-label='Methods' }

___
### GetPriority ()
{: #GetPriority .lua-content-item aria-label='Methods' }
#### integer :GetPriority ()
{: aria-label='Methods' }

___
### GetRepairSpeed ()
{: #GetRepairSpeed .lua-content-item aria-label='Methods' }
#### number :GetRepairSpeed ()
{: aria-label='Methods' }

___
### GetRepairingId ()
{: #GetRepairingId .lua-content-item aria-label='Methods' }
#### integer :GetRepairingId ()
{: aria-label='Methods' }

___
### GetResisted ()
{: #GetResisted .lua-content-item aria-label='Methods' }
#### boolean :GetResisted ()
{: aria-label='Methods' }

___
### GetRoomDamage ()
{: #GetRoomDamage .lua-content-item aria-label='Methods' }
#### [Damage](../Hyperspace/Damage) :GetRoomDamage ()
{: aria-label='Methods' }

___
### GetSavedPosition ()
{: #GetSavedPosition .lua-content-item aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetSavedPosition ()
{: aria-label='Methods' }

___
### GetSkillLevel ()
{: #GetSkillLevel .lua-content-item aria-label='Methods' }
#### integer :GetSkillLevel (integer skillId)
{: aria-label='Methods' }

___
### GetSkillModifier ()
{: #GetSkillModifier .lua-content-item aria-label='Methods' }
#### number :GetSkillModifier (integer skillId)
{: aria-label='Methods' }

___
### GetSkillProgress ()
{: #GetSkillProgress .lua-content-item aria-label='Methods' }
#### pair\<integer, integer\> :GetSkillProgress (integer skillId)
{: aria-label='Methods' }

___
### GetSpecies ()
{: #GetSpecies .lua-content-item aria-label='Methods' }
#### string :GetSpecies ()
{: aria-label='Methods' }

___
### GetSuffocationMultiplier ()
{: #GetSuffocationMultiplier .lua-content-item aria-label='Methods' }
#### number :GetSuffocationMultiplier ()
{: aria-label='Methods' }

___
### GetTooltip ()
{: #GetTooltip .lua-content-item aria-label='Methods' }
#### string :GetTooltip ()
{: aria-label='Methods' }

___
### GetUniqueRepairing ()
{: #GetUniqueRepairing .lua-content-item aria-label='Methods' }
#### string :GetUniqueRepairing ()
{: aria-label='Methods' }

___
### HasSpecialPower ()
{: #HasSpecialPower .lua-content-item aria-label='Methods' }
#### boolean :HasSpecialPower ()
{: aria-label='Methods' }

___
### IncreaseSkill ()
{: #IncreaseSkill .lua-content-item aria-label='Methods' }
#### void :IncreaseSkill (integer skillId)
{: aria-label='Methods' }

___
### InitializeSkills ()
{: #InitializeSkills .lua-content-item aria-label='Methods' }
#### void :InitializeSkills ()
{: aria-label='Methods' }

___
### InsideRoom ()
{: #InsideRoom .lua-content-item aria-label='Methods' }
#### boolean :InsideRoom (integer roomId)
{: aria-label='Methods' }

___
### IsAnaerobic ()
{: #IsAnaerobic .lua-content-item aria-label='Methods' }
#### boolean :IsAnaerobic ()
{: aria-label='Methods' }

___
### IsBusy ()
{: #IsBusy .lua-content-item aria-label='Methods' }
#### boolean :IsBusy ()
{: aria-label='Methods' }

___
### IsCloned ()
{: #IsCloned .lua-content-item aria-label='Methods' }
#### boolean :IsCloned ()
{: aria-label='Methods' }

___
### IsCrew ()
{: #IsCrew .lua-content-item aria-label='Methods' }
#### boolean :IsCrew ()
{: aria-label='Methods' }

___
### IsDead ()
{: #IsDead .lua-content-item aria-label='Methods' }
#### boolean :IsDead ()
{: aria-label='Methods' }

___
### IsDrone ()
{: #IsDrone .lua-content-item aria-label='Methods' }
#### boolean :IsDrone ()
{: aria-label='Methods' }

___
### IsManningArtillery ()
{: #IsManningArtillery .lua-content-item aria-label='Methods' }
#### boolean :IsManningArtillery ()
{: aria-label='Methods' }

___
### IsTelepathic ()
{: #IsTelepathic .lua-content-item aria-label='Methods' }
#### boolean :IsTelepathic ()
{: aria-label='Methods' }

___
### Jump ()
{: #Jump .lua-content-item aria-label='Methods' }
#### void :Jump ()
{: aria-label='Methods' }

___
### Kill ()
{: #Kill .lua-content-item aria-label='Methods' }
#### void :Kill (boolean noClone)
{: aria-label='Methods' }

___
### LoadState ()
{: #LoadState .lua-content-item aria-label='Methods' }
#### void :LoadState (integer fileHelper)
{: aria-label='Methods' }

___
### MasterSkill ()
{: #MasterSkill .lua-content-item aria-label='Methods' }
#### void :MasterSkill (integer skillId)
{: aria-label='Methods' }

___
### ModifyHealth ()
{: #ModifyHealth .lua-content-item aria-label='Methods' }
#### void :ModifyHealth (number health)
{: aria-label='Methods' }

___
### MoveToRoom ()
{: #MoveToRoom .lua-content-item aria-label='Methods' }
#### boolean :MoveToRoom (integer roomId, integer slotId, boolean forceMove)
{: aria-label='Methods' }

___
### MultiShots ()
{: #MultiShots .lua-content-item aria-label='Methods' }
#### boolean :MultiShots ()
{: aria-label='Methods' }

___
### NeedFrozenLocation ()
{: #NeedFrozenLocation .lua-content-item aria-label='Methods' }
#### boolean :NeedFrozenLocation ()
{: aria-label='Methods' }

___
### NeedsSlot ()
{: #NeedsSlot .lua-content-item aria-label='Methods' }
#### boolean :NeedsSlot ()
{: aria-label='Methods' }

___
### OnInit ()
{: #OnInit .lua-content-item aria-label='Methods' }
#### boolean :OnInit ()
{: aria-label='Methods' }

___
### OnLoop ()
{: #OnLoop .lua-content-item aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender .lua-content-item aria-label='Methods' }
#### void :OnRender (boolean outlineOnly)
{: aria-label='Methods' }

___
### OnRenderHealth ()
{: #OnRenderHealth .lua-content-item aria-label='Methods' }
#### void :OnRenderHealth ()
{: aria-label='Methods' }

___
### OnRenderPath ()
{: #OnRenderPath .lua-content-item aria-label='Methods' }
#### void :OnRenderPath ()
{: aria-label='Methods' }

___
### OutOfGame ()
{: #OutOfGame .lua-content-item aria-label='Methods' }
#### boolean :OutOfGame ()
{: aria-label='Methods' }

___
### PermanentDeath ()
{: #PermanentDeath .lua-content-item aria-label='Methods' }
#### boolean :PermanentDeath ()
{: aria-label='Methods' }

___
### PositionShift ()
{: #PositionShift .lua-content-item aria-label='Methods' }
#### number :PositionShift ()
{: aria-label='Methods' }

___
### PowerReady ()
{: #PowerReady .lua-content-item aria-label='Methods' }
#### boolean :PowerReady ()
{: aria-label='Methods' }

___
### ProvidesPower ()
{: #ProvidesPower .lua-content-item aria-label='Methods' }
#### boolean :ProvidesPower ()
{: aria-label='Methods' }

___
### ProvidesVision ()
{: #ProvidesVision .lua-content-item aria-label='Methods' }
#### boolean :ProvidesVision ()
{: aria-label='Methods' }

___
### ReadyToFight ()
{: #ReadyToFight .lua-content-item aria-label='Methods' }
#### boolean :ReadyToFight ()
{: aria-label='Methods' }

___
### RenderSkillUpAnimation ()
{: #RenderSkillUpAnimation .lua-content-item aria-label='Methods' }
#### void :RenderSkillUpAnimation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### Repairing ()
{: #Repairing .lua-content-item aria-label='Methods' }
#### boolean :Repairing ()
{: aria-label='Methods' }

___
### RepairingFire ()
{: #RepairingFire .lua-content-item aria-label='Methods' }
#### boolean :RepairingFire ()
{: aria-label='Methods' }

___
### RepairingSystem ()
{: #RepairingSystem .lua-content-item aria-label='Methods' }
#### boolean :RepairingSystem ()
{: aria-label='Methods' }

___
### ResetPower ()
{: #ResetPower .lua-content-item aria-label='Methods' }
#### void :ResetPower ()
{: aria-label='Methods' }

___
### Restart ()
{: #Restart .lua-content-item aria-label='Methods' }
#### void :Restart ()
{: aria-label='Methods' }

___
### RestorePosition ()
{: #RestorePosition .lua-content-item aria-label='Methods' }
#### boolean :RestorePosition ()
{: aria-label='Methods' }

___
### Sabotaging ()
{: #Sabotaging .lua-content-item aria-label='Methods' }
#### boolean :Sabotaging ()
{: aria-label='Methods' }

___
### SavePosition ()
{: #SavePosition .lua-content-item aria-label='Methods' }
#### void :SavePosition ()
{: aria-label='Methods' }

___
### SaveState ()
{: #SaveState .lua-content-item aria-label='Methods' }
#### void :SaveState (integer fileHelper)
{: aria-label='Methods' }

___
### SelectSabotageTarget ()
{: #SelectSabotageTarget .lua-content-item aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :SelectSabotageTarget ()
{: aria-label='Methods' }

___
### SetCloneReady ()
{: #SetCloneReady .lua-content-item aria-label='Methods' }
#### void :SetCloneReady (boolean cloneReady)
{: aria-label='Methods' }

___
### SetCurrentShip ()
{: #SetCurrentShip .lua-content-item aria-label='Methods' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Methods' }

___
### SetCurrentSystem ()
{: #SetCurrentSystem .lua-content-item aria-label='Methods' }
#### void :SetCurrentSystem ([ShipSystem](../Hyperspace/ShipSystem) sys)
{: aria-label='Methods' }

___
### SetCurrentTarget ()
{: #SetCurrentTarget .lua-content-item aria-label='Methods' }
#### void :SetCurrentTarget ([StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) target, boolean unk)
{: aria-label='Methods' }

___
### SetDamageBoost ()
{: #SetDamageBoost .lua-content-item aria-label='Methods' }
#### void :SetDamageBoost (number damageBoost)
{: aria-label='Methods' }

___
### SetDeathNumber ()
{: #SetDeathNumber .lua-content-item aria-label='Methods' }
#### void :SetDeathNumber (integer deathNum)
{: aria-label='Methods' }

___
### SetFrozen ()
{: #SetFrozen .lua-content-item aria-label='Methods' }
#### void :SetFrozen (boolean frozen)
{: aria-label='Methods' }

___
### SetFrozenLocation ()
{: #SetFrozenLocation .lua-content-item aria-label='Methods' }
#### void :SetFrozenLocation (boolean frozenLocation)
{: aria-label='Methods' }

___
### SetHealthBoost ()
{: #SetHealthBoost .lua-content-item aria-label='Methods' }
#### void :SetHealthBoost (integer healthBoost)
{: aria-label='Methods' }

___
### SetMedbay ()
{: #SetMedbay .lua-content-item aria-label='Methods' }
#### void :SetMedbay (number health)
{: aria-label='Methods' }

___
### SetMindControl ()
{: #SetMindControl .lua-content-item aria-label='Methods' }
#### void :SetMindControl (boolean controlled)
{: aria-label='Methods' }

___
### SetName ()
{: #SetName .lua-content-item aria-label='Methods' }
#### void :SetName ([TextString](../Hyperspace/TextString) name, boolean force)
{: aria-label='Methods' }

___
### SetOutOfGame ()
{: #SetOutOfGame .lua-content-item aria-label='Methods' }
#### void :SetOutOfGame ()
{: aria-label='Methods' }

___
### SetPath ()
{: #SetPath .lua-content-item aria-label='Methods' }
#### boolean :SetPath (Path path)
{: aria-label='Methods' }

___
### SetPosition ()
{: #SetPosition .lua-content-item aria-label='Methods' }
#### void :SetPosition ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### SetResisted ()
{: #SetResisted .lua-content-item aria-label='Methods' }
#### void :SetResisted (boolean resisted)
{: aria-label='Methods' }

___
### SetRoom ()
{: #SetRoom .lua-content-item aria-label='Methods' }
#### void :SetRoom (integer roomId)
{: aria-label='Methods' }

___
### SetRoomPath ()
{: #SetRoomPath .lua-content-item aria-label='Methods' }
#### void :SetRoomPath (integer slotId, integer roomId)
{: aria-label='Methods' }

___
### SetSavePosition ()
{: #SetSavePosition .lua-content-item aria-label='Methods' }
#### void :SetSavePosition ([Slot](../Hyperspace/Slot) position)
{: aria-label='Methods' }

___
### SetSex ()
{: #SetSex .lua-content-item aria-label='Methods' }
#### void :SetSex (boolean male)
{: aria-label='Methods' }

___
### SetSkillProgress ()
{: #SetSkillProgress .lua-content-item aria-label='Methods' }
#### void :SetSkillProgress (integer skillId, integer skillLevel)
{: aria-label='Methods' }

___
### SetTask ()
{: #SetTask .lua-content-item aria-label='Methods' }
#### void :SetTask (CrewTask task)
{: aria-label='Methods' }

___
### ShipDamage ()
{: #ShipDamage .lua-content-item aria-label='Methods' }
#### boolean :ShipDamage (number damage)
{: aria-label='Methods' }

___
### StartRepair ()
{: #StartRepair .lua-content-item aria-label='Methods' }
#### void :StartRepair ([Repairable](../Hyperspace/Repairable) toRepair)
{: aria-label='Methods' }

___
### StartTeleport ()
{: #StartTeleport .lua-content-item aria-label='Methods' }
#### void :StartTeleport ()
{: aria-label='Methods' }

___
### StartTeleportArrive ()
{: #StartTeleportArrive .lua-content-item aria-label='Methods' }
#### void :StartTeleportArrive ()
{: aria-label='Methods' }

___
### StopRepairing ()
{: #StopRepairing .lua-content-item aria-label='Methods' }
#### void :StopRepairing ()
{: aria-label='Methods' }

___
### UpdateHealth ()
{: #UpdateHealth .lua-content-item aria-label='Methods' }
#### void :UpdateHealth ()
{: aria-label='Methods' }

___
### UpdateMovement ()
{: #UpdateMovement .lua-content-item aria-label='Methods' }
#### void :UpdateMovement ()
{: aria-label='Methods' }

___
### UpdateRepair ()
{: #UpdateRepair .lua-content-item aria-label='Methods' }
#### void :UpdateRepair ()
{: aria-label='Methods' }

___
### ValidTarget ()
{: #ValidTarget .lua-content-item aria-label='Methods' }
#### boolean :ValidTarget (integer unk)
{: aria-label='Methods' }

___
### WithinRect ()
{: #WithinRect .lua-content-item aria-label='Methods' }
#### boolean :WithinRect (integer x, integer y, integer w, integer h)
{: aria-label='Methods' }

___


## Fields
{: #Fields .lua-content-section}
### bActiveManning
{: #bActiveManning .lua-content-item aria-label='Fields' }
#### boolean .bActiveManning
{: aria-label='Fields' }

___
### bCloned
{: #bCloned .lua-content-item aria-label='Fields' }
#### boolean .bCloned
{: aria-label='Fields' }

___
### bDead
{: #bDead .lua-content-item aria-label='Fields' }
#### boolean .bDead
{: aria-label='Fields' }

___
### bFighting
{: #bFighting .lua-content-item aria-label='Fields' }
#### boolean .bFighting
{: aria-label='Fields' }

___
### bFrozen
{: #bFrozen .lua-content-item aria-label='Fields' }
#### boolean .bFrozen
{: aria-label='Fields' }

___
### bFrozenLocation
{: #bFrozenLocation .lua-content-item aria-label='Fields' }
#### boolean .bFrozenLocation
{: aria-label='Fields' }

___
### bMindControlled
{: #bMindControlled .lua-content-item aria-label='Fields' }
#### boolean .bMindControlled
{: aria-label='Fields' }

___
### bOutOfGame
{: #bOutOfGame .lua-content-item aria-label='Fields' }
#### boolean .bOutOfGame
{: aria-label='Fields' }

___
### bResisted
{: #bResisted .lua-content-item aria-label='Fields' }
#### boolean .bResisted
{: aria-label='Fields' }

___
### bSharedSpot
{: #bSharedSpot .lua-content-item aria-label='Fields' }
#### boolean .bSharedSpot
{: aria-label='Fields' }

___
### bSuffocating
{: #bSuffocating .lua-content-item aria-label='Fields' }
#### boolean .bSuffocating
{: aria-label='Fields' }

___
### blockingDoor
{: #blockingDoor .lua-content-item aria-label='Fields' }
#### [Door](../Hyperspace/Door) .blockingDoor
{: aria-label='Fields' }

___
### blueprint
{: #blueprint .lua-content-item aria-label='Fields' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) .blueprint
{: aria-label='Fields' }

___
### boardingGoal
{: #boardingGoal .lua-content-item aria-label='Fields' }
#### BoardingGoal .boardingGoal
{: aria-label='Fields' }

___
### clone_ready
{: #clone_ready .lua-content-item aria-label='Fields' }
#### boolean .clone_ready
{: aria-label='Fields' }

___
### crewAnim
{: #crewAnim .lua-content-item aria-label='Fields' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) .crewAnim
{: aria-label='Fields' }

___
### crewTarget
{: #crewTarget .lua-content-item aria-label='Fields' }
#### [StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) .crewTarget
{: aria-label='Fields' }

___
### currentRepair
{: #currentRepair .lua-content-item aria-label='Fields' }
#### [Repairable](../Hyperspace/Repairable) .currentRepair
{: aria-label='Fields' }

___
### currentShipId
{: #currentShipId .lua-content-item aria-label='Fields' }
#### integer .currentShipId
{: aria-label='Fields' }

___
### currentSlot
{: #currentSlot .lua-content-item aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .currentSlot
{: aria-label='Fields' }

___
### currentSystem
{: #currentSystem .lua-content-item aria-label='Fields' }
#### [ShipSystem](../Hyperspace/ShipSystem) .currentSystem
{: aria-label='Fields' }

___
### currentTarget
{: #currentTarget .lua-content-item aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .currentTarget
{: aria-label='Fields' }

___
### extend (Read-only)
{: #extend .lua-content-item aria-label='Fields' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .extend
{: aria-label='Fields' }

___
### fCloneDying
{: #fCloneDying .lua-content-item aria-label='Fields' }
#### number .fCloneDying
{: aria-label='Fields' }

___
### fMedbay
{: #fMedbay .lua-content-item aria-label='Fields' }
#### number .fMedbay
{: aria-label='Fields' }

___
### fMindDamageBoost
{: #fMindDamageBoost .lua-content-item aria-label='Fields' }
#### number .fMindDamageBoost
{: aria-label='Fields' }

___
### fStunTime
{: #fStunTime .lua-content-item aria-label='Fields' }
#### number .fStunTime
{: aria-label='Fields' }

___
### finalGoal
{: #finalGoal .lua-content-item aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .finalGoal
{: aria-label='Fields' }

___
### flashHealthTracker
{: #flashHealthTracker .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashHealthTracker
{: aria-label='Fields' }

___
### goal_x
{: #goal_x .lua-content-item aria-label='Fields' }
#### number .goal_x
{: aria-label='Fields' }

___
### goal_y
{: #goal_y .lua-content-item aria-label='Fields' }
#### number .goal_y
{: aria-label='Fields' }

___
### healing
{: #healing .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .healing
{: aria-label='Fields' }

___
### health
{: #health .lua-content-item aria-label='Fields' }
#### pair\<number, number\> .health
{: aria-label='Fields' }

___
### healthBar
{: #healthBar .lua-content-item aria-label='Fields' }
#### CachedRect .healthBar
{: aria-label='Fields' }

___
### healthBoost
{: #healthBoost .lua-content-item aria-label='Fields' }
#### integer .healthBoost
{: aria-label='Fields' }

___
### healthBox
{: #healthBox .lua-content-item aria-label='Fields' }
#### CachedImage .healthBox
{: aria-label='Fields' }

___
### healthBoxRed
{: #healthBoxRed .lua-content-item aria-label='Fields' }
#### CachedImage .healthBoxRed
{: aria-label='Fields' }

___
### height
{: #height .lua-content-item aria-label='Fields' }
#### integer .height
{: aria-label='Fields' }

___
### iDeathNumber
{: #iDeathNumber .lua-content-item aria-label='Fields' }
#### integer .iDeathNumber
{: aria-label='Fields' }

___
### iManningId
{: #iManningId .lua-content-item aria-label='Fields' }
#### integer .iManningId
{: aria-label='Fields' }

___
### iOnFire
{: #iOnFire .lua-content-item aria-label='Fields' }
#### integer .iOnFire
{: aria-label='Fields' }

___
### iRepairId
{: #iRepairId .lua-content-item aria-label='Fields' }
#### integer .iRepairId
{: aria-label='Fields' }

___
### iRoomId
{: #iRoomId .lua-content-item aria-label='Fields' }
#### integer .iRoomId
{: aria-label='Fields' }

___
### iShipId
{: #iShipId .lua-content-item aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }

___
### iStackId
{: #iStackId .lua-content-item aria-label='Fields' }
#### integer .iStackId
{: aria-label='Fields' }

___
### intruder
{: #intruder .lua-content-item aria-label='Fields' }
#### boolean .intruder
{: aria-label='Fields' }

___
### lastDamageTimer
{: #lastDamageTimer .lua-content-item aria-label='Fields' }
#### number .lastDamageTimer
{: aria-label='Fields' }

___
### lastHealthChange
{: #lastHealthChange .lua-content-item aria-label='Fields' }
#### number .lastHealthChange
{: aria-label='Fields' }

___
### lastLevelUp
{: #lastLevelUp .lua-content-item aria-label='Fields' }
#### integer .lastLevelUp
{: aria-label='Fields' }

___
### last_door
{: #last_door .lua-content-item aria-label='Fields' }
#### [Door](../Hyperspace/Door) .last_door
{: aria-label='Fields' }

___
### levelUp
{: #levelUp .lua-content-item aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .levelUp
{: aria-label='Fields' }

___
### mindControlled
{: #mindControlled .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .mindControlled
{: aria-label='Fields' }

___
### moveGoal
{: #moveGoal .lua-content-item aria-label='Fields' }
#### integer .moveGoal
{: aria-label='Fields' }

___
### movementTarget
{: #movementTarget .lua-content-item aria-label='Fields' }
#### CachedImage .movementTarget
{: aria-label='Fields' }

___
### new_path
{: #new_path .lua-content-item aria-label='Fields' }
#### boolean .new_path
{: aria-label='Fields' }

___
### path
{: #path .lua-content-item aria-label='Fields' }
#### Path .path
{: aria-label='Fields' }

___
### savedPosition
{: #savedPosition .lua-content-item aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .savedPosition
{: aria-label='Fields' }

___
### scale
{: #scale .lua-content-item aria-label='Fields' }
#### number .scale
{: aria-label='Fields' }

___
### selectionImage
{: #selectionImage .lua-content-item aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .selectionImage
{: aria-label='Fields' }

___
### selectionState
{: #selectionState .lua-content-item aria-label='Fields' }
#### integer .selectionState
{: aria-label='Fields' }

___
### ship
{: #ship .lua-content-item aria-label='Fields' }
#### [Ship](../Hyperspace/Ship) .ship
{: aria-label='Fields' }

___
### size
{: #size .lua-content-item aria-label='Fields' }
#### number .size
{: aria-label='Fields' }

___
### skillUp
{: #skillUp .lua-content-item aria-label='Fields' }
#### vector\<vector\<[AnimationTracker](../Hyperspace/AnimationTracker)\>\> .skillUp
{: aria-label='Fields' }

___
### skillsEarned
{: #skillsEarned .lua-content-item aria-label='Fields' }
#### vector\<vector\<boolean\>\> .skillsEarned
{: aria-label='Fields' }

___
### species
{: #species .lua-content-item aria-label='Fields' }
#### string .species
{: aria-label='Fields' }

___
### speed_x
{: #speed_x .lua-content-item aria-label='Fields' }
#### number .speed_x
{: aria-label='Fields' }

___
### speed_y
{: #speed_y .lua-content-item aria-label='Fields' }
#### number .speed_y
{: aria-label='Fields' }

___
### stats
{: #stats .lua-content-item aria-label='Fields' }
#### [SCrewStats](../Hyperspace/SCrewStats) .stats
{: aria-label='Fields' }

___
### stunIcon
{: #stunIcon .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .stunIcon
{: aria-label='Fields' }

___
### stunned
{: #stunned .lua-content-item aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .stunned
{: aria-label='Fields' }

___
### table
{: #table .lua-content-item aria-label='Fields' }
#### table .table
{: aria-label='Fields' }

___
### task
{: #task .lua-content-item aria-label='Fields' }
#### CrewTask .task
{: aria-label='Fields' }

___
### type
{: #type .lua-content-item aria-label='Fields' }
#### string .type
{: aria-label='Fields' }

___
### usingSkill
{: #usingSkill .lua-content-item aria-label='Fields' }
#### integer .usingSkill
{: aria-label='Fields' }

___
### width
{: #width .lua-content-item aria-label='Fields' }
#### integer .width
{: aria-label='Fields' }

___
### x (Read-only)
{: #x .lua-content-item aria-label='Fields' }
#### number .x
{: aria-label='Fields' }
**read-only**

___
### x_destination
{: #x_destination .lua-content-item aria-label='Fields' }
#### number .x_destination
{: aria-label='Fields' }

___
### y (Read-only)
{: #y .lua-content-item aria-label='Fields' }
#### number .y
{: aria-label='Fields' }
**read-only**

___
### y_destination
{: #y_destination .lua-content-item aria-label='Fields' }
#### number .y_destination
{: aria-label='Fields' }

___
